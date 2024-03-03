#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidgetPool.h"
#include "FortHUDElementWidget.h"
#include "Templates/SubclassOf.h"
#include "AthenaIndicatorLayerBase.generated.h"

class UAthenaPlayerIndicatorBase;
class UAthenaPlayerViewModel;
class UFortActorCanvas;
class USlateVectorArtData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaIndicatorLayerBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActorCanvas* GeneralIndicators;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActorCanvas* NameIndicators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaPlayerIndicatorBase> PlayerIndicatorClass;
    
    UPROPERTY( EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUserWidgetPool PlayerIndicatorWidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaPlayerViewModel* PlayerVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateVectorArtData* TeamIndicatorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasTargeting;
    
public:
    UAthenaIndicatorLayerBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetingChanged(bool bTargeting);
    
};

