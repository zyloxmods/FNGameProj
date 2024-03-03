#pragma once
#include "CoreMinimal.h"
#include "McpVariantChannelInfo.h"
#include "FortAthenaLoadout.generated.h"

class UAthenaBackpackItemDefinition;
class UAthenaBattleBusItemDefinition;
class UAthenaCallingCardItemDefinition;
class UAthenaCharacterItemDefinition;
class UAthenaCharmItemDefinition;
class UAthenaDanceItemDefinition;
class UAthenaGliderItemDefinition;
class UAthenaHatItemDefinition;
class UAthenaItemWrapDefinition;
class UAthenaLoadingScreenItemDefinition;
class UAthenaMapMarkerItemDefinition;
class UAthenaMusicPackItemDefinition;
class UAthenaPetItemDefinition;
class UAthenaPickaxeItemDefinition;
class UAthenaSkyDiveContrailItemDefinition;
class UAthenaVehicleCosmeticItemDefinition;
class UAthenaVictoryPoseItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortAthenaLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BannerIconId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BannerColorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaSkyDiveContrailItemDefinition* SkyDiveContrail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaGliderItemDefinition* Glider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaPickaxeItemDefinition* Pickaxe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDefaultCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCharacterItemDefinition* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> CharacterVariantChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForceUpdateVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaHatItemDefinition* Hat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaBackpackItemDefinition* Backpack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaLoadingScreenItemDefinition* LoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaBattleBusItemDefinition* BattleBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaVehicleCosmeticItemDefinition* VehicleDecoration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCallingCardItemDefinition* CallingCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaMapMarkerItemDefinition* MapMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAthenaDanceItemDefinition*> Dances;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaVictoryPoseItemDefinition* VictoryPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaMusicPackItemDefinition* MusicPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaItemWrapDefinition* ItemWrapOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAthenaItemWrapDefinition*> ItemWraps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCharmItemDefinition* CharmOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCharmItemDefinition*> Charms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaPetItemDefinition* PetSkin;
    
    FFortAthenaLoadout();
};

