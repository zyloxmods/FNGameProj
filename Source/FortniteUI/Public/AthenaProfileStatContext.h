#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "AthenaMatchStats.h"
#include "AthenaProfileStatContext.generated.h"

class UAthenaMatchSetStatView;
class UAthenaMatchStatView;
class UAthenaSeasonStats;
class UFortMcpProfileAthenaStats;

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UAthenaProfileStatContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAthenaStatsProfileLoaded, UFortMcpProfileAthenaStats*, StatProfile);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAthenaStatsProfileLoaded OnStatsProfileLoaded;
    
    UAthenaProfileStatContext();
    UFUNCTION(BlueprintCallable)
    TArray<UAthenaMatchStatView*> CreateMatchViews(const TArray<FAthenaMatchStats>& InRecentMatches);
    
    UFUNCTION(BlueprintCallable)
    UAthenaMatchSetStatView* CreateMatchStatView(UAthenaSeasonStats* StatSet, FName Bucket);
    
    UFUNCTION(BlueprintCallable)
    UAthenaMatchStatView* CreateCurrentMatchStatView();
    
};

