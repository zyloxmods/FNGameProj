#pragma once
#include "CoreMinimal.h"
#include "AthenaMatchStatView.h"
#include "AthenaMatchSetStatView.generated.h"

class UAthenaSeasonStats;

UCLASS(Blueprintable)
class UAthenaMatchSetStatView : public UAthenaMatchStatView {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaSeasonStats* OwningSeason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaylistId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAthenaMatchStatView*> BestMatches;
    
public:
    UAthenaMatchSetStatView();
    UFUNCTION(BlueprintCallable)
    UAthenaSeasonStats* GetOwningSeason();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAthenaMatchStatView*> GetBestMatchViews() const;
    
};

