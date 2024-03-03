#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "Engine/DataTable.h"
#include "AthenaMapGamePanel.generated.h"

class UAthenaChallengePageRotator;
class UAthenaChallengePageView;
class UAthenaMapChallengeCategoryRotator;
class UAthenaMiniChallenges;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaMapGamePanel : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengePageView* PageView_Challenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_Challenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengePageRotator* Rotator_ChallengePages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMapChallengeCategoryRotator* Rotator_ChallengeCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMiniChallenges* MiniChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PlaceMarkerBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RemoveMarkerBinding;
    
public:
    UAthenaMapGamePanel();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateInspectText(const FText& InText);
    
};

