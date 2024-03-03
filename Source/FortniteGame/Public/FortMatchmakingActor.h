#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingActor.h"
#include "FortMatchmakingActor.generated.h"

class UUserWidget;

UCLASS(Abstract, Blueprintable)
class AFortMatchmakingActor : public ABuildingActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LeaderInteractDetailsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LeaderInteractDetailsColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MemberInteractDetailsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MemberInteractDetailsColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> MatchmakingWidgetClass;
    
public:
    AFortMatchmakingActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseBlueprintMMSCode() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetMMSCodeForLocalPlayerParty();
    
};

