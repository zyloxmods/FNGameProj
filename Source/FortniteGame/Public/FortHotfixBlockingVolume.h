#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FortHotfixBlockingVolume.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class AFortHotfixBlockingVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BlockBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedExtent, meta=(AllowPrivateAccess=true))
    FVector ReplicatedExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeededOnClient;
    
    AFortHotfixBlockingVolume();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedExtent();
    
    UFUNCTION(BlueprintCallable)
    void CopyToClipboard();
    
};

