#pragma once
#include "CoreMinimal.h"
#include "EmoteMontageVariantDef.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "FortCosmeticEmoteMontageVariant.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortCosmeticEmoteMontageVariant : public UFortCosmeticVariantBackedByArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, TitleProperty="VariantName"))
    TArray<FEmoteMontageVariantDef> EmoteOptions;
    
public:
    UFortCosmeticEmoteMontageVariant();
};

