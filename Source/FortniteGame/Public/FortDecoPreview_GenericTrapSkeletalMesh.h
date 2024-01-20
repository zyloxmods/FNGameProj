#pragma once
#include "CoreMinimal.h"
#include "FortDecoPreview_GenericTrap.h"
#include "FortDecoPreview_GenericTrapSkeletalMesh.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AFortDecoPreview_GenericTrapSkeletalMesh : public AFortDecoPreview_GenericTrap {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkelMeshComponent;
    
public:
    AFortDecoPreview_GenericTrapSkeletalMesh();
};

