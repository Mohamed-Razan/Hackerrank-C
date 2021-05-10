// Question: https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem


void sort_by_area(triangle* tr, int n) {
	double area[n], temp;
    int i, j, tempa, tempb, tempc;
    for(i = 0; i < n; i++){
        double p = (double) (tr[i].a + tr[i].b + tr[i].c)/2;
        area[i] = sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));

    }
    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(area[i] > area[j]){
                temp = area[i];
                area[i] = area[j];
                area[j] = temp;

                tempa = tr[i].a;
                tr[i].a = tr[j].a;
                tr[j].a = tempa;

                tempb = tr[i].b;
                tr[i].b = tr[j].b;
                tr[j].b = tempb;

                tempc = tr[i].c;
                tr[i].c = tr[j].c;
                tr[j].c = tempc;
            }
        }
    }
}

