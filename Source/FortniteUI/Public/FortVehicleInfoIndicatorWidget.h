#pragma once
#include "CoreMinimal.h"
#include "FortActorIndicatorWidget.h"
#include "FortVehicleInfoIndicatorWidget.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable, EditInlineNew)
class UFortVehicleInfoIndicatorWidget : public UFortActorIndicatorWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> CurrentVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToHideWhenDamaged;
    
public:
    UFortVehicleInfoIndicatorWidget();
    UFUNCTION(BlueprintCallable)
    void SetVehicle(AActor* NewVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnVehicleHealthChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVehicleChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetControlledPawn() const;
    
};

