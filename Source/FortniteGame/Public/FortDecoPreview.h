#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "EBuildingAttachmentType.h"
#include "EPlacementType.h"
#include "FortDecoPreview.generated.h"

class ABuildingActor;
class AFortDecoHelper;
class UCurveFloat;
class UFortDecoItemDefinition;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMeshComponent;
class UTexture;

UCLASS(Abstract, Blueprintable)
class AFortDecoPreview : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingAttachmentType FallbackAttachmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPlacementType::Type> FallbackPlacementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> PreviewPlacementMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> MotionBounceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CanBePlacedMaterialScalarParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValidPlacementScalarParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvalidPlacementScalarParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InverseMovementVectorMaterialParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementEffectScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InverseOuterScaleVectorParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InverseInnerScaleVectorParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WorldSpacePivotVectorParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DiffuseTextureParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreePlacementOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeline BounceTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> PreviewMIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DirectionChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldSpacePivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortDecoHelper* ParentDecoHelper;
    
public:
    AFortDecoPreview();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVectorParameterValueOnAllPreviewMIDs(FName ParamName, const FLinearColor& ParamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetScalarParameterValueOnAllPreviewMIDs(FName ParamName, float ParamValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateVisuals(float DeltaSeconds, bool bSafeToPlace);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateScale(float Scale, const FVector& InWorldSpacePivot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitializeDecoPreview(const ABuildingActor* NewBuildingActor, const UFortDecoItemDefinition* NewDecoItemDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBounceMotionUpdate(float VectorScale);
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetTextureParameterValueFromMeshComponent(UMeshComponent* MeshComp, int32 ElementIdx, FName ParamName);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* CreatePreviewMID(UMaterialInterface* OverrideParentMaterial);
    
};

