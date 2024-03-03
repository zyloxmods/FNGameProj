#pragma once
#include "CoreMinimal.h"
#include "GameStateComponent.h"
#include "ActorOverlapEvent.h"
#include "PlayspaceManagerComponent.generated.h"

class AGameplayVolume;
class APlayerState;
class APlayspace;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PLAYSPACESYSTEM_API UPlayspaceManagerComponent : public UGameStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    APlayspace* RootPlayspace;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorOverlapEvent> UnhandledEnterEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorOverlapEvent> UnhandledExitEvents;
    
public:
    UPlayspaceManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    bool ProcessOverlapEvents(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEndOverlapGameplayVolume(APlayerState* PlayerState, AGameplayVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerBeginOverlapGameplayVolume(APlayerState* PlayerState, AGameplayVolume* Volume);
    
};

