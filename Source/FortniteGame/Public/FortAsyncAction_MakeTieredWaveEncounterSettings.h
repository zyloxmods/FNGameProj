#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FortEncounterSettings.h"
#include "FortEncounterSettingsDelegateDelegate.h"
#include "TieredWaveSetData.h"
#include "FortAsyncAction_MakeTieredWaveEncounterSettings.generated.h"

class UFortAsyncAction_MakeTieredWaveEncounterSettings;

UCLASS(Blueprintable)
class UFortAsyncAction_MakeTieredWaveEncounterSettings : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEncounterSettingsDelegate OnComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTieredWaveSetData WaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortEncounterSettings EncounterSettings;
    
public:
    UFortAsyncAction_MakeTieredWaveEncounterSettings();
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_MakeTieredWaveEncounterSettings* CreateAsyncAction_MakeTieredWaveEncounterSettings(const FTieredWaveSetData& NewWaveData, const FFortEncounterSettings& InEncounterSettings);
    
};

