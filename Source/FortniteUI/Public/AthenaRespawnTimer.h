#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaRespawnTimer.generated.h"

class AFortPlayerControllerZone;
class UCommonTextBlock;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UAthenaRespawnTimer : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CreativeMinUpdateTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Time;
    
public:
    UAthenaRespawnTimer();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimeEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTickDown();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleStartedRespawn(AFortPlayerControllerZone* PlayerController);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddExtensionWidget_BP(UWidget* Widget);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddExtensionWidget(UWidget* Widget);
    
};

