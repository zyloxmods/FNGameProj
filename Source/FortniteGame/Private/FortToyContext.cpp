#include "FortToyContext.h"

void UFortToyContext::PrintToMessageFeed(const FText& MESSAGE) {
}

FText UFortToyContext::PickToyOwnerNameStyle(AFortPlayerState* Instigator) {
    return FText::GetEmpty();
}

FString UFortToyContext::GetFilteredPlayerName(AFortPlayerState* Instigator) {
    return TEXT("");
}

FText UFortToyContext::FormatPlayerNameForDisplay(AFortPlayerState* Subject, EMessageFeedSubject SubjectType) {
    return FText::GetEmpty();
}

bool UFortToyContext::ConditionalPrintToMessageFeed(AFortPlayerState* Instigator, FVector MessageLocation, EMessageFeedRelationshipFilter RelationshipFilter, const FText& MESSAGE) {
    return false;
}

UFortToyContext::UFortToyContext() {
}

