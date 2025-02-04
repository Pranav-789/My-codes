#include<stdio.h>
#include<string.h>

struct Date{
    int mm;
    int dd;
    int yyyy;
};

int compare(struct Date a,struct Date b){
    // if d1 is in future return 1
    if((a.yyyy == b.yyyy) && (a.mm == b.mm) && (a.dd == b.dd)){
    return 0;
    }

    if(a.yyyy > b.yyyy){
    return 1;
    }
    else if(a.yyyy < b.yyyy){
    return -1;
    }

    else if(a.mm > b.mm){
    return 1;
    }
    else if(a.mm < b.mm){
    return -1;
    }
    
    else if (a.dd > b.dd)
    {
        return 1;
    }
    else if (a.dd < b.dd)
    {
        return -1;
    }
    
}

int main () {
    struct Date d1 = {30, 4, 2006};
    struct Date d2 = {26, 3, 2017};

    printf("%d", compare(d1, d2));
    return 0;
}