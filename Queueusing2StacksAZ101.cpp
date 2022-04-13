n = 5;  h = 1;

px = @(Mk,Mk1,h,yk,yk1,xk,xk1,x) (Mk/6)*((xk1 - x)^3/h - h*(xk1 - x)) + (Mk1/6)*((x - xk)^3/h - h*(x - xk))...
+ (yk/h)*(xk1 - x) + (yk1/h)*(x - xk);

diffpx = @(Mk,Mk1,h,yk,yk1,xk,xk1,x) (Mk/6)*((-3/h)*(xk1 - x)^2 + h) + (Mk1/6)*((3/h)*(x - xk)^2 - h)...
- (yk/h) + (yk1/h);

a = 1.5; b = 3.5;

X = zeros(n,1);

for i = 1:n
X(i) = i;
end

Y = zeros(n,1); % given data pxoints

Y(1) = 0; Y(2) = 1;
Y(3) = 0; Y(4) = 1;
Y(5) = 0;

M = zeros(n,1);
A = zeros(n-2,n-2);
D = zeros(n-2,1);
U = zeros(n-2,1);

for i = 2:n-2
A(i,i-1) = 1;
end

for i = 1:n-2
A(i,i) = 4;
end

for i = 1:n-3
A(i,i+1) = 1;
end

for i = 1:n-2
D(i) = (6/h^2)*((Y(i+2) - Y(i+1)) - (Y(i+1) - Y(i)));
end

U = ThomasAlgo(A,D);

for i = 1:n-2
M(i+1) = S(i);
end

k = 1;

for i = 1:n-1
if X(i)<=a && X(i+1)>a
k = i;
break;
end
end

ya = px(M(k),M(k+1),h,Y(k),Y(k+1),X(k),X(k+1),a);

for i = 1:n-1
if X(i)<=b && X(i+1)>b
k = i;
break;
end
end

yb = px(M(k),M(k+1),h,Y(k),Y(k+1),X(k),X(k+1),b);

fprintf('y(%f) = %f\n',a,ya);
fprintf("y(%f) = %f\n",b,yb);

function y=ThomasAlgo(A,B)
    n = size(A,1);
    A(1,2) = A(1,2)/A(1,1);
    for i = 2:n-1
    A(i,i+1) = A(i,i+1)/(A(i,i) - A(i,i-1)*A(i-1,i));
    end

    B(1) = B(1)/A(1,1);
    for i = 2:n
    B(i) = (B(i) - A(i,i-1)*D(i-1))/(A(i,i) - A(i,i-1)*A(i-1,i));
    end

    y = zeros(n,1);
    y(n) = B(n);
    for i = n-1:-1:1
    y(i) = B(i) - A(i,i+1)*y(i+1);
    end
    end
