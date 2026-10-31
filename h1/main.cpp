#include <iostream>

using namespace std;

void calcSum(float sum1, float sum2){
    float resultSum = sum1 + sum2;
    cout << "Lukujen summa on " << resultSum << endl;
}
int retSum(float rsum1, float rsum2){
    float resultSum2 = rsum1 + rsum2;
    return resultSum2;
}
void calcDiv(float jaettava, float jakaja){
    if(jakaja == 0){
        cout << "Jakaja ei voi olla nolla!";
    }else{
        float resultDiv = jaettava / jakaja;
        cout << "Lukujen jako on " << resultDiv << endl;
    }
}
float retDiv(float jaettava2, float jakaja2){
    if(jakaja2 == 0){
        throw runtime_error("Jakaja ei saa olla nolla!\n");
    }else{
        float resultDiv2 = jaettava2 / jakaja2;
        return resultDiv2;
    }
}
int main()
{
    float a;
    float b;
    cout << "Anna kaksi lukua." << endl;
    cin >> a;
    cin >> b;
    calcSum(a, b);
    calcDiv(a, b);

    float result1 = retSum(a,b);
    cout << a << "+" << b << "=" << result1 << endl;

    try{
        float resultDiv1 = retDiv(a,b);
        cout << a << "/" << b << "=" << resultDiv1 << endl;
    }catch(runtime_error& e){
        cout<<"Error: "<< e.what()<< endl;
    }

    return 0;
}
