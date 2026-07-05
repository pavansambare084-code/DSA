int maxProfit(int* prices, int pricesSize) {
    // int max_profit=0;
    // for(int i=0;i<pricesSize;i++){
    //     for(int j=i;j<pricesSize;j++){
    //         if(prices[j]>prices[i]){
    //             if(max_profit<prices[j]-prices[i]){
    //                 max_profit=prices[j]-prices[i];
    //             }
    //         }
    //     }
    // }
    int min=prices[0],max_profit=0,diff;
    for(int i=1;i<pricesSize;i++){
        if(prices[i]<min){
            min=prices[i];
        }
        else{
            diff=prices[i]-min;
            if(diff>max_profit){
                 max_profit=diff;
        }
        }
    }
    return max_profit;
}