#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaPlayerTeamKillsBase.generated.h"

class AFortPlayerControllerAthena;
class AFortPlayerStateAthena;
class UObject;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaPlayerTeamKillsBase : public UFortHUDElementWidget {
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
    UAthenaPlayerTeamKillsBase();
    UFUNCTION(BlueprintCallable)
    void SetKillsSourcePlayerState(AFortPlayerStateAthena* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void SetKillsSourcePlayerController(AFortPlayerControllerAthena* InPlayerController);
    
};

