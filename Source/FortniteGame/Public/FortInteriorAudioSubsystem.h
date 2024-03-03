#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "InteriorAudioPlayerInfo.h"
#include "FortInteriorAudioSubsystem.generated.h"

class AFortPlayerController;
class UBuildingStructuralSupportSystem;
class UFortInteriorAudioSettings;

UCLASS(Blueprintable, Config=Game)
class UFortInteriorAudioSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath InteriorAudioSettingsPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortInteriorAudioSettings* Settings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* FPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteriorAudioPlayerInfo Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBuildingStructuralSupportSystem* BuildingGrid;
    
public:
    UFortInteriorAudioSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
};

