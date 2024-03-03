#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EFortTeam.h"
#include "FortCheckPointSplineActor.generated.h"

class USplineComponent;
class USplineMeshComponent;

UCLASS(Blueprintable)
class AFortCheckPointSplineActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSmoothSplineMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineMeshTension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSplineMeshAtStartup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> SplineMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawSplineMapUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EFortTeam::Type>, FLinearColor> SplineMapUITeamColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSplineMapUISegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineMapUIThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplineMapUIAntialias;
    
public:
    AFortCheckPointSplineActor();
    UFUNCTION(BlueprintCallable)
    void ShowSplineMeshes(int32 SplineIndexStart, int32 SplineIndexEnd);
    
    UFUNCTION(BlueprintCallable)
    void ShowMapUI(int32 SplineIndexStart, int32 SplineIndexEnd);
    
    UFUNCTION(BlueprintCallable)
    void ShowFullMapUI();
    
    UFUNCTION(BlueprintCallable)
    void HideSplineMeshes();
    
    UFUNCTION(BlueprintCallable)
    void HideMapUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USplineComponent* GetSplineComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FVector> GetCheckPointLocations() const;
    
};

