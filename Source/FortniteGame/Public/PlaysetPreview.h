#pragma once
#include "CoreMinimal.h"
#include "ObjectInteractionBehavior.h"
#include "PlaysetInfo.h"
#include "PlaysetPreview.generated.h"

class AStaticMeshActor;
class UMaterial;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UPlaysetPreview : public UObjectInteractionBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* PreviewPlaysetStaticMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* PlaysetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* PlaysetMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlaysetToPlace, meta=(AllowPrivateAccess=true))
    FPlaysetInfo PlaysetToPlace;
    
    UPlaysetPreview();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdatePreviewMeshScale();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlaysetToPlace();
    
};

