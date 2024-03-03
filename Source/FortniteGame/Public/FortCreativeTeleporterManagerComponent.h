#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EFortCreativeTeleporterGroup.h"
#include "TeleporterGroup.h"
#include "FortCreativeTeleporterManagerComponent.generated.h"

class AFortCreativeTeleporter;
class AFortPlayerPawn;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Creative, meta=(BlueprintSpawnableComponent))
class UFortCreativeTeleporterManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTeleporterGroup> TeleporterGroupList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTeleporterGroup> TeleporterListedByTeleportToWhenReceived;
    
public:
    UFortCreativeTeleporterManagerComponent();
    UFUNCTION(BlueprintCallable)
    void UnregisterTeleporterFromGroup(AFortCreativeTeleporter* TeleporterToUnregister, const EFortCreativeTeleporterGroup GroupToUnregisterOn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RequestPermissionToTeleportPawn(const AFortPlayerPawn* PlayerPawn, const AFortCreativeTeleporter* RequestingTeleporter, const FGameplayTagContainer ChannelIdContainer) const;
    
    UFUNCTION(BlueprintCallable)
    void RegisterTeleporterWithGroup(AFortCreativeTeleporter* TeleporterToRegister, const EFortCreativeTeleporterGroup GroupToRegisterOn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<AFortCreativeTeleporter*> GetTeleportersInGroup(const EFortCreativeTeleporterGroup Group) const;
    
};

