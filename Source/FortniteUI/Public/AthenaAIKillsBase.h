#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaAIKillsBase.generated.h"

class AFortPlayerControllerAthena;
class AFortPlayerStateAthena;
class UObject;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaAIKillsBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* KillsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* KillsSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCustomKillSource;
    
public:
    UAthenaAIKillsBase();
    UFUNCTION(BlueprintCallable)
    void SetKillsSourcePlayerState(AFortPlayerStateAthena* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void SetKillsSourcePlayerController(AFortPlayerControllerAthena* InPlayerController);
    
};

