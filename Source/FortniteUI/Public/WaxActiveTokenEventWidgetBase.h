#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "WaxActiveTokenEventWidgetBase.generated.h"

class AFortAthenaMutator_Wax;

UCLASS(Blueprintable, EditInlineNew)
class UWaxActiveTokenEventWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Wax* WaxMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaxTokensForMediumCrit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaxTokensForHighCrit;
    
public:
    UWaxActiveTokenEventWidgetBase();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWaxTokensMediumCrit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWaxTokensHighCrit() const;
    
};

