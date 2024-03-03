#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingProp.h"
#include "EFortCreativeTeleporterGroup.h"
#include "Templates/SubclassOf.h"
#include "FortCreativeTeleporter.generated.h"

class AActor;
class UFortGameplayReceiverMessageComponent;
class UGameplayAbility;

UCLASS(Blueprintable)
class AFortCreativeTeleporter : public ABuildingProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> TeleporterAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCreativeTeleporterGroup Knob_TeleporterGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCreativeTeleporterGroup Knob_TargetTeleporterGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGameplayReceiverMessageComponent* TeleportToWhenReceived;
    
    AFortCreativeTeleporter();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeleporterBlocked(const AActor* ActorToTeleport, const FRotator& InPawnTeleportedRotation) const;
    
};

