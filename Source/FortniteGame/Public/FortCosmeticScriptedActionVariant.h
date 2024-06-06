#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "ScriptedActionVariantDef.h"
#include "FortCosmeticScriptedActionVariant.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortCosmeticScriptedActionVariant : public UFortCosmeticVariantBackedByArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, TitleProperty="VariantName"))
    TArray<FScriptedActionVariantDef> ActionOptions;
    
public:
    UFortCosmeticScriptedActionVariant();
};

