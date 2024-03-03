#pragma once
#include "CoreMinimal.h"
#include "Components/TimelineComponent.h"
#include "EFortResourceType.h"
#include "FortWeap_BuildingToolBase.h"
#include "FortWeap_BuildingTool.generated.h"

class UBuildingEditModeMetadata;
class UCurveFloat;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture2D;

UCLASS(Blueprintable)
class AFortWeap_BuildingTool : public AFortWeap_BuildingToolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BlueprintPaperMaterial;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BlueprintDiffuseTextures[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BlueprintEmissiveMaskTextures[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BlueprintPaperPulseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DefaultMetadata, meta=(AllowPrivateAccess=true))
    UBuildingEditModeMetadata* DefaultMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BlueprintPaperMID;
    
    UPROPERTY( EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimeline BlueprintPaperPulseTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortResourceType LastResourceType;
    
public:
    AFortWeap_BuildingTool();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DefaultMetadata(UBuildingEditModeMetadata* OldMetadata);
    
    UFUNCTION(BlueprintCallable)
    void OnBlueprintPaperPulseUpdate(float InCurveVal);
    
};

