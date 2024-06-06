#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "MeshVariantDef.h"
#include "FortCosmeticMeshVariant.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortCosmeticMeshVariant : public UFortCosmeticVariantBackedByArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, TitleProperty="VariantName"))
    TArray<FMeshVariantDef> MeshOptions;
    
public:
    UFortCosmeticMeshVariant();
};

