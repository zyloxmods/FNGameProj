#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "BuildingTrapFloor.h"
#include "ServerLaunchInfo.h"
#include "FortLauncherAthena.generated.h"

class AActor;
class AFortPlayerPawnAthena;
class UPrimitiveComponent;
class USoundBase;

UCLASS(Blueprintable)
class AFortLauncherAthena : public ABuildingTrapFloor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LaunchStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LaunchStrengthVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* OnLaunchSound3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* OnLaunchSound1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRepLaunchServerInfo, meta=(AllowPrivateAccess=true))
    FServerLaunchInfo ServerLaunchInfo;
    
    AFortLauncherAthena();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void TriggerLaunchEffects(AFortPlayerPawnAthena* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void ReTriggerForPawn(AFortPlayerPawnAthena* AthenaPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnRepLaunchServerInfo();
    
};

