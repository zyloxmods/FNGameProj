#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortMatchXPTotalEntry.generated.h"

class UCommonNumericTextBlock;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMatchXPTotalEntry : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTotal;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText XPType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonNumericTextBlock* NumericText_XPValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_XPType;
    
public:
    UFortMatchXPTotalEntry();
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeXPCounter();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetXPTarget();
    
};

