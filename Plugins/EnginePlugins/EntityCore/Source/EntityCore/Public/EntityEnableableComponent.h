#pragma once
#include "CoreMinimal.h"
#include "EntityComponent.h"
#include "EntityEnableableComponent.generated.h"

UCLASS(Abstract, Blueprintable)
class ENTITYCORE_API UEntityEnableableComponent : public UEntityComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Enabled, meta=(AllowPrivateAccess=true))
    uint8 IsEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 LastIsEnabled: 1;
    
public:
    UEntityEnableableComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Enabled();
    
};

