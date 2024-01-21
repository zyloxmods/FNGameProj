#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "PartVariantDef.h"
#include "FortCosmeticCharacterPartVariant.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortCosmeticCharacterPartVariant : public UFortCosmeticVariantBackedByArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartVariantDef> PartOptions;
    
public:
    UFortCosmeticCharacterPartVariant();
};

