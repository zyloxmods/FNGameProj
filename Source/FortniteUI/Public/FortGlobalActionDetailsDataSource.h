#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortGlobalActionDetails.h"
#include "FortGlobalActionDetailsDataSourceOnChangeDelegateDelegate.h"
#include "FortGlobalActionDetailsDataSource.generated.h"

UINTERFACE(Blueprintable)
class UFortGlobalActionDetailsDataSource : public UInterface {
    GENERATED_BODY()
};

class IFortGlobalActionDetailsDataSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveOnChangeDelegate(const FFortGlobalActionDetailsDataSourceOnChangeDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FFortGlobalActionDetails GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddOnChangeDelegate(const FFortGlobalActionDetailsDataSourceOnChangeDelegate& InDelegate);
    
};

