#pragma once
#include "CoreMinimal.h"
#include "FortPlayspaceComponent.h"
#include "ServerMigrationAlertData.h"
#include "PapayaServerMigrationComponent.generated.h"

class AGameStateBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UPapayaServerMigrationComponent : public UFortPlayspaceComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FServerMigrationAlertData> AlertDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LastRequestedTimeForMigrationTimerPushback, meta=(AllowPrivateAccess=true))
    float LastRequestedTimeForMigrationTimerPushback;
    
public:
    UPapayaServerMigrationComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LastRequestedTimeForMigrationTimerPushback();
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateReady(AGameStateBase* GameState);
    
};

