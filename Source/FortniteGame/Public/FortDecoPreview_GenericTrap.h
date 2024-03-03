#pragma once
#include "CoreMinimal.h"
#include "FortDecoPreview_GenericBuildingSMActor.h"
#include "FortDecoPreview_GenericTrap.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AFortDecoPreview_GenericTrap : public AFortDecoPreview_GenericBuildingSMActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TrapRangeMeshComponent;
    
public:
    AFortDecoPreview_GenericTrap();
};

