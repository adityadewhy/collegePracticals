void main(){
    int n = 0;
    printf("enter no of lines : ");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){
        for(int space = n; space>=i; space--){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}
