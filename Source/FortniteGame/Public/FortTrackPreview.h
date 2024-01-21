#pragma once
#include "CoreMinimal.h"
#include "FortDecoPreview.h"
#include "FortTrackPreview.generated.h"

class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AFortTrackPreview : public AFortDecoPreview {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* TrackPieceMeshesByType[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TrackMeshComp;
    
    AFortTrackPreview();
    UFUNCTION(BlueprintCallable)
    void InitializeTrackPreview(UStaticMeshComponent* InTrackMeshComp);
    
};

