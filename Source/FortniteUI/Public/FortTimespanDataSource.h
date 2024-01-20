#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "FortTimespanDataSourceOnChangeDelegateDelegate.h"
#include "FortTimespanDataSource.generated.h"

UINTERFACE(Blueprintable)
class UFortTimespanDataSource : public UInterface {
    GENERATED_BODY()
};

class IFortTimespanDataSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveOnChangeDelegate(const FFortTimespanDataSourceOnChangeDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTimespan GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddOnChangeDelegate(const FFortTimespanDataSourceOnChangeDelegate& InDelegate);
    
};

