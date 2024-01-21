#pragma once
#include "CoreMinimal.h"
#include "FortDecoPreview.h"
#include "FortDecoPreview_GenericBuildingSMActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AFortDecoPreview_GenericBuildingSMActor : public AFortDecoPreview {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PrimaryMeshComponent;
    
public:
    AFortDecoPreview_GenericBuildingSMActor();
};

