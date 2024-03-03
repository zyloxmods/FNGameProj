#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortMatchXPDetails.generated.h"

class UAthenaAccoladeListWidget;
class UFortMatchStatsScreen;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMatchXPDetails : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMatchStatsScreen* Section_MatchStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaAccoladeListWidget* Section_MedalList;
    
public:
    UFortMatchXPDetails();
};

