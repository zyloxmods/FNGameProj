#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "UObject/NoExportTypes.h"
#include "EMessageFeedRelationshipFilter.h"
#include "EMessageFeedSubject.h"
#include "FortToyContext.generated.h"

class AFortPlayerState;

UCLASS(Blueprintable, NonTransient, Config=Game)
class FORTNITEGAME_API UFortToyContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UFortToyContext();
    UFUNCTION(BlueprintCallable)
    void PrintToMessageFeed(const FText& MESSAGE);
    
    UFUNCTION(BlueprintCallable)
    FText PickToyOwnerNameStyle(AFortPlayerState* Instigator);
    
    UFUNCTION(BlueprintCallable)
    FString GetFilteredPlayerName(AFortPlayerState* Instigator);
    
    UFUNCTION(BlueprintCallable)
    FText FormatPlayerNameForDisplay(AFortPlayerState* Subject, EMessageFeedSubject SubjectType);
    
    UFUNCTION(BlueprintCallable)
    bool ConditionalPrintToMessageFeed(AFortPlayerState* Instigator, FVector MessageLocation, EMessageFeedRelationshipFilter RelationshipFilter, const FText& MESSAGE);
    
};

