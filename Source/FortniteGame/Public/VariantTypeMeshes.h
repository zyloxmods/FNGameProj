#pragma once
#include "CoreMinimal.h"
#include "MeshVariant.h"
#include "VariantTypeBase.h"
#include "VariantTypeMeshes.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVariantTypeMeshes : public UVariantTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshVariant> VariantMeshes;
    
    UVariantTypeMeshes();
};

