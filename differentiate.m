function d = differentiate(x, dx, n)
s=0;
for k = 1:n
    s=s-(-1)^n*delta(x, dx, k)/k;
end
d=s/dx;
