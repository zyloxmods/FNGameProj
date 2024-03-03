#pragma once
#include "CoreMinimal.h"
#include "EmoteMontageVariantDef.h"
#include "VariantTypeBase.h"
#include "VariantTypeEmoteMontage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVariantTypeEmoteMontage : public UVariantTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEmoteMontageVariantDef> VariantEmotes;
    
    UVariantTypeEmoteMontage();
};

