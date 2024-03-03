#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortPlayerHealthInfoComponent.generated.h"

class AFortTeamHealthInfo;

UCLASS(Abstract, Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPlayerHealthInfoComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamHealthInfoArray, meta=(AllowPrivateAccess=true))
    TArray<AFortTeamHealthInfo*> TeamHealthInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint8, AFortTeamHealthInfo*> TeamInfoToTeamHealthMap;
    
public:
    UFortPlayerHealthInfoComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamHealthInfoArray();
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(AFortTeamHealthInfo* TeamHealthInfo);
    
};

