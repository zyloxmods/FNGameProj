#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "CobaltWidgetBase.generated.h"

class AFortAthenaMutator_Cobalt;

UCLASS(Blueprintable, EditInlineNew)
class UCobaltWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Cobalt* CobaltMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> RoundNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InvalidRoundText;
    
public:
    UCobaltWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRoundNameIndex() const;
    
};

