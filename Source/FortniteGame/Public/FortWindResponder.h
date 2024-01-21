#pragma once
#include "CoreMinimal.h"
#include "FortWindMaterialData.h"
#include "FortWindResponderMaterialVariablePairData.h"
#include "FortWindResponder.generated.h"

class ABuildingSMActor;
class UCurveLinearColor;
class UMaterialInterface;
class USoundBase;

USTRUCT(BlueprintType)
struct FFortWindResponder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* WindUpdatingBuildingSMActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* WindSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* WindPannerSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* WindAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MildWindMaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> IntenseWindMaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortWindMaterialData> MaterialsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaterialParameterPairIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortWindResponderMaterialVariablePairData> PairedVariablesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WindSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSetupAnimatingMaterials;
    
    FORTNITEGAME_API FFortWindResponder();
};

