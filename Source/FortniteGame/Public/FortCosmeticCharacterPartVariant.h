#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "PartVariantDef.h"
#include "FortCosmeticCharacterPartVariant.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortCosmeticCharacterPartVariant : public UFortCosmeticVariantBackedByArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, TitleProperty="VariantName"))
    TArray<FPartVariantDef> PartOptions;
    
public:
    UFortCosmeticCharacterPartVariant();
};

