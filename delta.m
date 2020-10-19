function d = delta(x, dx, k)
if k==1
    d=f(x+dx)- f(x);
else
    d=-f(x+k*dx)
    for j = 0:(k-1)
        d=d+nchoosek(k,j)*delta(x, dx, j)
    end
end
