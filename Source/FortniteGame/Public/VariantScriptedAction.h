#pragma once
#include "CoreMinimal.h"
#include "ScriptedActionVariant.h"
#include "VariantTypeBase.h"
#include "VariantScriptedAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVariantScriptedAction : public UVariantTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScriptedActionVariant> VariantActions;
    
    UVariantScriptedAction();
};

