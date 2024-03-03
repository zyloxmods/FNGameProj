#pragma once
#include "CoreMinimal.h"
#include "FortDecoPreview.h"
#include "FortDecoPreview_StaticMesh.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AFortDecoPreview_StaticMesh : public AFortDecoPreview {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PrimaryMeshComponent;
    
public:
    AFortDecoPreview_StaticMesh();
};

